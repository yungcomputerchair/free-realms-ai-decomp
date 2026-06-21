// addr: 0x01005750
// name: VideoCapture_EncoderThreadImpl_ctor
// subsystem: common/media/video
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
VideoCapture_EncoderThreadImpl_ctor
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
          undefined4 param_5,undefined4 *param_6)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs VideoCapture::EncoderThreadImpl, initializes several
                       synchronization/queue members, stores constructor arguments near the end of
                       the object, and starts setup via 01001c60. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01632462;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00fc4cc0(0x4000,2,0);
  local_4 = 0;
  *param_1 = VideoCapture::EncoderThreadImpl::vftable;
  FUN_00fc4580(4000);
  local_4._0_1_ = 1;
  FUN_00fc4580(4000);
  local_4._0_1_ = 2;
  FUN_00fc4580(4000);
  local_4._0_1_ = 3;
  FUN_00fc4580(4000);
  local_4._0_1_ = 4;
  SoeUtil_Semaphore_ctor(param_1 + 0xba,0,0x7fffffff);
  local_4._0_1_ = 5;
  SoeUtil_Semaphore_ctor(param_1 + 0xc2,0,0x7fffffff);
  local_4._0_1_ = 6;
  FUN_01004720();
  local_4._0_1_ = 7;
  FUN_01004720();
  local_4._0_1_ = 8;
  VideoCapture_EncoderTiming_init(param_1 + 0xe4);
  param_1[0xf0] = param_2;
  param_1[0xf1] = param_3;
  param_1[0xf2] = *param_4;
  param_1[0xf3] = param_4[1];
  param_1[0xf4] = param_5;
  param_1[0xf5] = *param_6;
  param_1[0xf6] = param_6[1];
  param_1[0xf7] = param_6[2];
  local_4 = CONCAT31(local_4._1_3_,10);
  param_1[0xf8] = 0;
  FUN_01001c60();
  ExceptionList = local_c;
  return param_1;
}

