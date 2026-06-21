// addr: 0x00904170
// name: YouTubeUploader_initOnce
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall YouTubeUploader_initOnce(int param_1)

{
  char extraout_AL;
  void *pvVar1;
  void *this;
  void *value_;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes the YouTube uploader and handler once using the security
                       RootStore. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158a676;
  local_c = ExceptionList;
  value_ = (void *)0x0;
  if (*(int *)(param_1 + 0x904) != 0) {
    return 1;
  }
  ExceptionList = &local_c;
  if (DAT_01b3c264 != '\0') {
    DAT_01be48f4 = FUN_00f90eb0("./Resources/Security/RootStore",0,
                                DAT_01b839d8 ^ (uint)&stack0xffffffe4);
    DAT_01b3c264 = '\0';
  }
  if (DAT_01be48f4 != '\0') {
    pvVar1 = Mem_Alloc(0x20);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      pvVar1 = YouTube_YouTubeUploader_ctor(pvVar1);
    }
    local_4 = 0xffffffff;
    this = Mem_Alloc(8);
    local_4 = 1;
    if (this != (void *)0x0) {
      value_ = YouTube_FRYouTubeUploaderHandler_ctor(this,FUN_00904060);
    }
    local_4 = 0xffffffff;
    FUN_0108c650(pvVar1,0x1801874,(int)value_);
    if (extraout_AL != '\0') {
      *(void **)(param_1 + 0x904) = pvVar1;
      *(void **)(param_1 + 0x90c) = value_;
      ExceptionList = local_c;
      return 1;
    }
    if (pvVar1 != (void *)0x0) {
      FUN_0108c810();
                    /* WARNING: Subroutine does not return */
      _free(pvVar1);
    }
  }
  ExceptionList = local_c;
  return 0;
}

