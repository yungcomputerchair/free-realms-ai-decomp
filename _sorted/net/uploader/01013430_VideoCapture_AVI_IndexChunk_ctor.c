// addr: 0x01013430
// name: VideoCapture_AVI_IndexChunk_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall VideoCapture_AVI_IndexChunk_ctor(void *param_1,void *param_2,int *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a VideoCapture AVI index chunk/state object, initializing a
                       SoeUtil::Array<VideoCapture::AVI::MySTDINDEXENTRY> member and clearing
                       related counters. Evidence is the MySTDINDEXENTRY array vtable and
                       VideoCapture::AVI context. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01633f3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01010590(param_1,param_2,param_3,DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  *(undefined ***)((int)param_1 + 0x20) =
       SoeUtil::Array<VideoCapture::AVI::MySTDINDEXENTRY,0,1>::vftable;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)((int)param_1 + 0x28) = 0;
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  *(int **)((int)param_1 + 0x30) = param_3;
  *(undefined4 *)((int)param_1 + 0x38) = 0;
  *(undefined4 *)((int)param_1 + 0x3c) = 0;
  *(undefined4 *)((int)param_1 + 0x40) = 0;
  *(undefined4 *)((int)param_1 + 0x44) = 0;
  ExceptionList = local_c;
  return param_1;
}

