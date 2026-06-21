// addr: 0x014b4690
// name: DisplayAction_emitWithImplicitCode
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DisplayAction_emitWithImplicitCode(void * this) */

bool __fastcall DisplayAction_emitWithImplicitCode(void *this)

{
  uint uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds and submits a display action (implicit) using fields +8,+4 and either
                       object at +0x10 or integer +0xc. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a7adb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x14);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  DisplayActionBuilder_addIntArg(pvVar2,*(int *)((int)this + 8));
  DisplayActionBuilder_addIntArg(pvVar2,*(int *)((int)this + 4));
  if (*(int *)((int)this + 0xc) == 0) {
    DisplayActionBuilder_addObjectArg(pvVar2,(void *)((int)this + 0x10));
  }
  else {
    DisplayActionBuilder_addIntArg(pvVar2,*(int *)((int)this + 0xc));
  }
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(pvVar2);
  ExceptionList = local_c;
  return true;
}

