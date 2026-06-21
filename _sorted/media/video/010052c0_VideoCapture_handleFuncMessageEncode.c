// addr: 0x010052c0
// name: VideoCapture_handleFuncMessageEncode
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VideoCapture_handleFuncMessageEncode(void * this, void * message) */

void __thiscall VideoCapture_handleFuncMessageEncode(void *this,void *message)

{
  uint uVar1;
  void *this_00;
  int iVar2;
  int iVar3;
  int local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Handles FuncMessage type 3 by checking frame limits under a lock, creating a
                       result code, allocating a response record, and enqueueing response type 8. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016322e3;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  local_14 = VideoCapture_EncoderThreadImpl_getState();
  if (((local_14 != 1) && (local_14 != 2)) && (local_14 != 5)) {
    ExceptionList = local_c;
    return;
  }
  FUN_00fc45f0(uVar1);
  local_4 = 0;
  iVar3 = *(int *)((int)this + 0x3d8);
  iVar2 = *(int *)((int)this + 0x3dc);
  FUN_01003230((int)this + 1000);
  if ((iVar3 == 0) || (iVar3 <= *(int *)((int)this + 0x400))) {
    if ((iVar2 == 0) || (iVar2 <= *(int *)((int)this + 0x404))) {
      local_4 = 0xffffffff;
      if (this != (void *)0xfffffeb0) {
        FUN_00fc4610();
      }
      iVar3 = VideoCapture_EncoderThreadImpl_encodeFrame
                        (*(void **)((int)this + 0x3c0),*(void **)(*(int *)((int)message + 4) + 8));
      goto LAB_010053b4;
    }
    iVar3 = -8;
  }
  else {
    iVar3 = -7;
  }
  local_4 = 0xffffffff;
  if (this != (void *)0xfffffeb0) {
    FUN_00fc4610();
  }
LAB_010053b4:
  this_00 = Mem_Alloc(0x14);
  local_4 = 1;
  if (this_00 == (void *)0x0) {
    local_10 = (void *)0x0;
  }
  else {
    iVar2 = VideoCapture_EncoderThreadImpl_getState();
    local_10 = VideoCapture_EncoderStateChangeParams_ctor(this_00,local_14,3,iVar2,iVar3);
  }
  local_4 = 0xffffffff;
  local_14 = 8;
  VideoCapture_EncoderThreadImpl_enqueueFuncMessage(this,&local_14);
  ExceptionList = local_c;
  return;
}

