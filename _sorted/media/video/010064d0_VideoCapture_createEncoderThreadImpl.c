// addr: 0x010064d0
// name: VideoCapture_createEncoderThreadImpl
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
VideoCapture_createEncoderThreadImpl
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x408-byte VideoCapture::EncoderThreadImpl and stores it through
                       an output holder pointer. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016326eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x408);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = VideoCapture_EncoderThreadImpl_ctor(param_2,param_3,param_4,param_5,param_6);
  }
  *param_1 = uVar2;
  ExceptionList = local_c;
  return param_1;
}

