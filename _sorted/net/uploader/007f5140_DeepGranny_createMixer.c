// addr: 0x007f5140
// name: DeepGranny_createMixer
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DeepGranny_createMixer(void * arg1, void * arg2) */

void * DeepGranny_createMixer(void *arg1,void *arg2)

{
  void *extraout_EAX;
  void *pvVar1;
  void *local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates/initializes storage through FUN_007f4860 and constructs a
                       DeepGranny_Mixer with two dereferenced arguments when allocation succeeds. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01565ac1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = (void *)FUN_007f4860(DAT_01b839d8 ^ (uint)&local_14);
  local_4 = 0;
  if (local_14 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    local_10 = local_14;
    DeepGranny_Mixer_ctor(local_14,*(void **)arg1,*(void **)arg2);
    pvVar1 = extraout_EAX;
  }
  ExceptionList = local_c;
  return pvVar1;
}

