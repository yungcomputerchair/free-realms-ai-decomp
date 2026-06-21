// addr: 0x01007b10
// name: VideoCapture_tryAcquireEncoderBuffer
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint VideoCapture_tryAcquireEncoderBuffer(void * this, void * outBuffer) */

uint __thiscall VideoCapture_tryAcquireEncoderBuffer(void *this,void *outBuffer)

{
  int iVar1;
  
                    /* For selected encoder states and a non-null resource at offset 0x1b8, requests
                       a pooled buffer/resource through 00f8e660 and returns 0 on success or -1 on
                       failure. */
  if ((*(int *)((int)this + 0x26c) - 1U < 4) && (*(void **)((int)this + 0x1b8) != (void *)0x0)) {
    iVar1 = VideoCapture_BufferPool_acquire(*(void **)((int)this + 0x1b8),outBuffer);
    return (-1 < iVar1) - 1 & 0xfffffffe;
  }
  return 0xffffffff;
}

