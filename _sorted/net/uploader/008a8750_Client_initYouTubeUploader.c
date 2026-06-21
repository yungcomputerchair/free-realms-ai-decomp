// addr: 0x008a8750
// name: Client_initYouTubeUploader
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Client_initYouTubeUploader(void * client) */

bool __fastcall Client_initYouTubeUploader(void *client)

{
  char cVar1;
  char extraout_AL;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Lazily creates a YouTubeUploaderImpl single-use uploader after validating
                       ./Resources/Security/RootStore, storing it in the client uploader slot. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0157e7ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = (**(code **)(*(int *)client + 0x28))(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  if ((cVar1 != '\0') && (*(int *)((int)client + 0x908) == 0)) {
    if (DAT_01b3c264 != '\0') {
      DAT_01be48f4 = FUN_00f90eb0("./Resources/Security/RootStore",0);
      DAT_01b3c264 = '\0';
    }
    if (DAT_01be48f4 != '\0') {
      pvVar2 = Mem_Alloc(4);
      uStack_4 = 0;
      if (pvVar2 == (void *)0x0) {
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = YouTube_YouTubeUploaderImpl_SingleUse_create(pvVar2);
      }
      uStack_4 = 0xffffffff;
      FUN_0108c740(pvVar2,0x1801874);
      if (extraout_AL != '\0') {
        *(void **)((int)client + 0x908) = pvVar2;
        ExceptionList = local_c;
        return true;
      }
      if (pvVar2 != (void *)0x0) {
        FUN_0108ca80();
                    /* WARNING: Subroutine does not return */
        _free(pvVar2);
      }
    }
  }
  ExceptionList = local_c;
  return false;
}

