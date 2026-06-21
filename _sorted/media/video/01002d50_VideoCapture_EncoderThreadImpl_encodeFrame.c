// addr: 0x01002d50
// name: VideoCapture_EncoderThreadImpl_encodeFrame
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int VideoCapture_EncoderThreadImpl_encodeFrame(void * this, void * frameParam)
    */

int __thiscall VideoCapture_EncoderThreadImpl_encodeFrame(void *this,void *frameParam)

{
  int iVar1;
  
                    /* Encodes a frame through the active encoder vtable when the state is 1, 2, or
                       5, then records state 3 on success. Evidence:
                       VideoCapture_handleFuncMessageEncode calls it and the code invokes the
                       encoder object at offset 0x88, vtable slot 0x0c. */
  iVar1 = *(int *)(*(int *)this + 0x98);
  if (((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 5)) {
    return -5;
  }
  iVar1 = (**(code **)(**(int **)(*(int *)this + 0x88) + 0xc))(frameParam);
  if (iVar1 == 0) {
    FUN_010027e0(3);
    iVar1 = 0;
  }
  return iVar1;
}

