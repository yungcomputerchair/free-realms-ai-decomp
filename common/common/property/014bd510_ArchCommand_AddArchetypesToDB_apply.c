// addr: 0x014bd510
// name: ArchCommand_AddArchetypesToDB_apply
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint ArchCommand_AddArchetypesToDB_apply(void * this) */

uint __fastcall ArchCommand_AddArchetypesToDB_apply(void *this)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *this_00;
  int *piVar4;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Iterates the command's archetype entries, resolves their archetype records,
                       copies each entry payload, and invokes a virtual apply/store method on the
                       resolved archetype. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a94d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = *(undefined4 **)((int)this + 0x10);
  local_1c = (int)this + 0xc;
  local_18 = (undefined4 *)*local_10;
  while( true ) {
    puVar2 = local_18;
    iVar1 = local_1c;
    if ((local_1c == 0) || (iVar3 = (int)this + 0xc, local_1c != iVar3)) {
      iVar3 = FUN_00d83c2d();
    }
    if (puVar2 == local_10) break;
    if (iVar1 == 0) {
      FUN_00d83c2d();
    }
    if (puVar2 == *(undefined4 **)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    ArchetypeDB_getInstance();
    Archetype_getField3c(this_00);
    ArchetypeDB_getInstance();
    piVar4 = (int *)ArchetypeDB_getArchetype();
    if (piVar4 != (int *)0x0) {
      if (puVar2 == *(undefined4 **)(iVar1 + 4)) {
        FUN_00d83c2d();
      }
      FUN_005f15f0(puVar2 + 4);
      local_4 = 0xffffffff;
      (**(code **)(*piVar4 + 0xe0))(*(undefined4 *)((int)this + 4));
    }
    RbTreeIterator_incrementLargeNode(&local_1c);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}

