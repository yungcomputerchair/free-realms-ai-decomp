// addr: 0x010159e0
// name: VideoCapture_AVI_State_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * VideoCapture_AVI_State_create(void * out) */

void * __fastcall VideoCapture_AVI_State_create(void *out)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a VideoCapture_AVI_State object, constructs it, and stores it in
                       the output slot. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0163440b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0xd8);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = VideoCapture_AVI_State_ctor(uVar1);
  }
  *(undefined4 *)out = uVar3;
  ExceptionList = local_c;
  return out;
}

