// addr: 0x014b37f0
// name: DisplayAction_emit_code_7e
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DisplayAction_emit_code_7e(void * this) */

bool __fastcall DisplayAction_emit_code_7e(void *this)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds and submits a display action (0x7e) using fields +8 and +0xc, plus
                       deck/action UI update. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a77eb;
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
  FUN_012f8c70(0x7e);
  DisplayActionBuilder_addIntArg(pvVar2,*(int *)((int)this + 8));
  DisplayActionBuilder_addIntArg(pvVar2,*(int *)((int)this + 0xc));
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(pvVar2);
  uVar4 = *(undefined4 *)((int)this + 8);
  FUN_012cfde0(uVar4);
  iVar3 = FUN_012cc710(uVar4);
  if (iVar3 != 0) {
    FUN_01402720(3 < *(int *)((int)this + 0xc));
  }
  ExceptionList = local_c;
  return true;
}

