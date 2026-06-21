// addr: 0x01000ea0
// name: VideoCapture_initializeCapture
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int VideoCapture_initializeCapture(void * this, void * settings, void * arg2,
   void * arg3) */

int __thiscall VideoCapture_initializeCapture(void *this,void *settings,void *arg2,void *arg3)

{
  void **ppvVar1;
  char extraout_AL;
  bool bVar2;
  uint3 extraout_var;
  uint3 uVar5;
  uint3 extraout_var_00;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 extraout_EAX;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a capture session if validation succeeds: creates the capture
                       holder and EncoderThreadImpl, initializes supporting state, posts the start
                       message, and stores the objects on this. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016317f6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01001a70(DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  uVar5 = extraout_var;
  if ((extraout_AL == '\0') ||
     (bVar2 = VideoCapture_EncoderStateTriple_isValid(arg2), uVar5 = extraout_var_00, !bVar2)) {
    ExceptionList = local_c;
    return (uint)uVar5 << 8;
  }
  pvVar3 = Mem_Alloc(4);
  uVar6 = 0;
  local_4 = 0;
  if (pvVar3 != (void *)0x0) {
    uVar6 = VideoCapture_createCaptureSessionHolder();
  }
  local_4 = 1;
  pvVar3 = Mem_Alloc(4);
  local_4._0_1_ = 2;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = VideoCapture_createEncoderThreadImpl
                      (uVar6,arg3,(int)settings + 0x50,*(undefined4 *)((int)settings + 0x58),arg2);
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  VideoCapture_FuncMessageParams_dtorThunk();
  VideoCapture_postStartMessage_thunk();
  ppvVar1 = *(void ***)this;
  if (ppvVar1 == (void **)0x0) {
    *(undefined4 *)this = uVar6;
    ppvVar1 = *(void ***)((int)this + 8);
    if (ppvVar1 == (void **)0x0) {
      *(undefined4 *)((int)this + 8) = uVar4;
      ExceptionList = local_c;
      return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
    }
    VideoCapture_FuncMessageParam_release(ppvVar1);
                    /* WARNING: Subroutine does not return */
    _free(ppvVar1);
  }
  VideoCapture_EncoderContext_deleteOwned(ppvVar1);
                    /* WARNING: Subroutine does not return */
  _free(ppvVar1);
}

