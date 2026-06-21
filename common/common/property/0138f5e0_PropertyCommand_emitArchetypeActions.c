// addr: 0x0138f5e0
// name: PropertyCommand_emitArchetypeActions
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Setting prototype: bool PropertyCommand_emitArchetypeActions(void * cmd) */

bool __fastcall PropertyCommand_emitArchetypeActions(void *cmd)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined1 local_1c [4];
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Looks up an archetype from fields on the command, gathers associated action
                       ids, resolves each ActionDB entry, wraps it, and emits it through a
                       callback/list. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01683bd8;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  uVar6 = *(undefined4 *)((int)cmd + 0x5c);
  uVar9 = *(undefined4 *)((int)cmd + 0x60);
  ArchetypeDB_getInstance();
  piVar4 = (int *)ArchetypeDB_getArchetype(uVar9,uVar6);
  if (piVar4 == (int *)0x0) {
    ExceptionList = local_c;
    return false;
  }
  pvVar5 = PlayArea_findPlayerElementById(*(void **)((int)cmd + 0x30),*(int *)((int)cmd + 0x40));
  if (pvVar5 != (void *)0x0) {
    iVar7 = *piVar4;
    uVar6 = GamePlayer_getAccountId(uVar3);
    pvVar5 = Game_getPlayableActionCollection(*(void **)((int)cmd + 0x30));
    (**(code **)(iVar7 + 0xdc))(local_1c,pvVar5,uVar6);
    uStack_4 = 0;
    ActionDB_ensureSingleton();
    puVar2 = puStack_14;
    if (puStack_14 < puStack_18) {
      FUN_00d83c2d();
    }
    puVar8 = puStack_18;
    if (puStack_14 < puStack_18) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      if (puVar8 == puVar2) break;
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      if (puStack_14 <= puVar8) {
        FUN_00d83c2d();
      }
      iVar7 = ActionDB_getAction(*puVar8,*(undefined4 *)((int)cmd + 0x5c));
      if (iVar7 != 0) {
        iVar1 = *(int *)((int)cmd + 0x48);
        uVar6 = PlayElement_getId();
        uVar6 = FUN_01322200(cmd,iVar7,uVar6);
        uVar6 = FUN_013221d0(uVar6);
        (**(code **)(iVar1 + 4))(uVar6);
      }
      if (puStack_14 <= puVar8) {
        FUN_00d83c2d();
      }
      puVar8 = puVar8 + 1;
    }
    uStack_4 = 0xffffffff;
    if (puStack_18 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_18);
    }
  }
  ExceptionList = local_c;
  return true;
}

