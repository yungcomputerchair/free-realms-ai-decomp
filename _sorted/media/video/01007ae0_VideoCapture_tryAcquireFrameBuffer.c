// addr: 0x01007ae0
// name: VideoCapture_tryAcquireFrameBuffer
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint VideoCapture_tryAcquireFrameBuffer(void * this, void * outBuffer) */

uint __thiscall VideoCapture_tryAcquireFrameBuffer(void *this,void *outBuffer)

{
  int iVar1;
  
                    /* If capture state at offset 0x1a0 is active, requests a pooled buffer/resource
                       through 00f8e660 and returns 0 on success or -1 on failure. The exact buffer
                       class is not identified. */
  if (*(void **)((int)this + 0x1a0) == (void *)0x0) {
    return 0xffffffff;
  }
  iVar1 = VideoCapture_BufferPool_acquire(*(void **)((int)this + 0x1a0),outBuffer);
  return (-1 < iVar1) - 1 & 0xfffffffe;
}

