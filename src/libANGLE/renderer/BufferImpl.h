//
// Copyright 2014 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//

// BufferImpl.h: Defines the abstract rx::BufferImpl class.

#ifndef LIBANGLE_RENDERER_BUFFERIMPL_H_
#define LIBANGLE_RENDERER_BUFFERIMPL_H_

#include "common/PackedEnums.h"
#include "common/angleutils.h"
#include "common/mathutil.h"
#include "libANGLE/Error.h"
#include "libANGLE/Observer.h"
#include "libANGLE/angletypes.h"

#include <stdint.h>

namespace gl
{
class BufferState;
class Context;
}  // namespace gl

namespace rx
{
struct BufferFeedback
{
    bool hasFeedback() const { return internalMemoryAllocationChanged || bufferStateChanged; }
    // buffer's backend storage was reallocated due to optimizations to prevent having to flush
    // pending commands and waiting for the GPU to become idle.
    bool internalMemoryAllocationChanged = false;
    // The buffer's state (size, storage etc) have changed.
    bool bufferStateChanged = false;
};
// We use two set of Subject messages. The CONTENTS_CHANGED message is signaled whenever data
// changes, to trigger re-translation or other events. Some buffers only need to be updated when the
// underlying driver object changes - this is notified via the STORAGE_CHANGED message.
class BufferImpl : public angle::Subject
{
  public:
    BufferImpl(const gl::BufferState &state) : mState(state) {}
    virtual ~BufferImpl() override {}
    virtual void destroy(const gl::Context *context) {}

    virtual angle::Result setDataWithUsageFlags(const gl::Context *context,
                                                gl::BufferBinding target,
                                                GLeglClientBufferEXT clientBuffer,
                                                const void *data,
                                                size_t size,
                                                gl::BufferUsage usage,
                                                GLbitfield flags,
                                                gl::BufferStorage bufferStorage,
                                                BufferFeedback *feedback);
    virtual angle::Result setData(const gl::Context *context,
                                  gl::BufferBinding target,
                                  const void *data,
                                  size_t size,
                                  gl::BufferUsage usage,
                                  BufferFeedback *feedback)     = 0;
    virtual angle::Result setSubData(const gl::Context *context,
                                     gl::BufferBinding target,
                                     const void *data,
                                     size_t size,
                                     size_t offset,
                                     BufferFeedback *feedback)  = 0;
    virtual angle::Result copySubData(const gl::Context *context,
                                      BufferImpl *source,
                                      GLintptr sourceOffset,
                                      GLintptr destOffset,
                                      GLsizeiptr size,
                                      BufferFeedback *feedback) = 0;
    virtual angle::Result map(const gl::Context *context,
                              GLenum access,
                              void **mapPtr,
                              BufferFeedback *feedback)         = 0;
    virtual angle::Result mapRange(const gl::Context *context,
                                   size_t offset,
                                   size_t length,
                                   GLbitfield access,
                                   void **mapPtr,
                                   BufferFeedback *feedback)    = 0;
    virtual angle::Result unmap(const gl::Context *context,
                                GLboolean *result,
                                BufferFeedback *feedback)       = 0;

    virtual angle::Result getIndexRange(const gl::Context *context,
                                        gl::DrawElementsType type,
                                        size_t offset,
                                        size_t count,
                                        bool primitiveRestartEnabled,
                                        gl::IndexRange *outRange) = 0;

    virtual angle::Result getSubData(const gl::Context *context,
                                     GLintptr offset,
                                     GLsizeiptr size,
                                     void *outData);

    virtual angle::Result onLabelUpdate(const gl::Context *context);

    // Override if accurate native memory size information is available
    virtual GLint64 getMemorySize() const;

    virtual void onDataChanged() {}

  protected:
    const gl::BufferState &mState;
};

inline GLint64 BufferImpl::getMemorySize() const
{
    return 0;
}

}  // namespace rx

#endif  // LIBANGLE_RENDERER_BUFFERIMPL_H_
