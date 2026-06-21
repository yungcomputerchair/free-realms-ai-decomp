// addr: 0x00916e70
// name: Client_setInternationalization
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Client_setInternationalization(void * client, int localeOrLanguageId_) */

bool __thiscall Client_setInternationalization(void *this,void *client,int localeOrLanguageId_)

{
  undefined1 uVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Replaces the client internationalization object for a new id, applies the
                       Internationalization/LogErrors config flag, and refreshes dependent managers.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158d2ab;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  pvVar3 = *(void **)((int)this + 0x854);
  if ((pvVar3 != (void *)0x0) && (client == *(void **)((int)this + 0x6dc))) {
    return false;
  }
  ExceptionList = &local_c;
  *(void **)((int)this + 0x6dc) = client;
  if (pvVar3 != (void *)0x0) {
    destroyPointerAndIntMapHolder(pvVar3);
                    /* WARNING: Subroutine does not return */
    _free(pvVar3);
  }
  pvVar3 = Mem_Alloc(0xa8);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0097adb0(client,this);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)((int)this + 0x854) = uVar4;
  uVar1 = Config_GetBool("Internationalization","LogErrors",0,0,0xffffffff,0xffffffff);
  *(undefined1 *)(*(int *)((int)this + 0x854) + 4) = uVar1;
  if ((*(int *)((int)this + 0x3e0) != 0) && (*(int *)((int)this + 0x3e0) != -0x19a60)) {
    Internationalization_setDefaultResourceRoot();
  }
  if ((*(int *)((int)this + 0x3e0) != 0) && (*(int *)((int)this + 0x3e0) != -0x1d3d0)) {
    FUN_00abdb20(uVar2);
  }
  ExceptionList = local_c;
  return true;
}

