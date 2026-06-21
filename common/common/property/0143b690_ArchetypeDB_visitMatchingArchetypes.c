// addr: 0x0143b690
// name: ArchetypeDB_visitMatchingArchetypes
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Setting prototype: void ArchetypeDB_visitMatchingArchetypes(void * predicate, void * context,
   void * visitor) */

void __cdecl ArchetypeDB_visitMatchingArchetypes(void *predicate,void *context,void *visitor)

{
  int iVar1;
  char cVar2;
  void *this;
  uint uVar3;
  void *this_00;
  void *this_01;
  int *piVar4;
  void *this_02;
  int iVar5;
  int *piVar6;
  undefined1 *outIds;
  undefined1 auStack_1c [4];
  int *piStack_18;
  int *piStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Collects all archetype ids, resolves each Archetype, applies a predicate, and
                       invokes visitor callbacks for acceptable archetypes and optional +300000
                       variants. Evidence is ArchetypeDB_collectArchetypeIds,
                       ArchetypeDB_getArchetype, and Archetype virtual flag checks. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01697c58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (**(code **)(*(int *)visitor + 0x24))(DAT_01b839d8 ^ (uint)&stack0xffffffcc);
  piStack_18 = (int *)0x0;
  piStack_14 = (int *)0x0;
  uStack_10 = 0;
  uStack_4 = 0;
  ArchetypeDB_getInstance();
  uVar3 = Archetype_getField3c(this);
  outIds = auStack_1c;
  ArchetypeDB_getInstance();
  ArchetypeDB_collectArchetypeIds(this_00,outIds,uVar3);
  piVar6 = piStack_18;
  if (piStack_14 < piStack_18) {
    FUN_00d83c2d();
  }
  while( true ) {
    piVar4 = piStack_14;
    if (piStack_14 < piStack_18) {
      FUN_00d83c2d();
    }
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (piVar6 == piVar4) break;
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (piStack_14 <= piVar6) {
      FUN_00d83c2d();
    }
    iVar1 = *piVar6;
    ArchetypeDB_getInstance();
    uVar3 = Archetype_getField3c(this_01);
    iVar5 = iVar1;
    ArchetypeDB_getInstance();
    piVar4 = (int *)ArchetypeDB_getArchetype(iVar5,uVar3);
    cVar2 = (**(code **)(*(int *)predicate + 4))(piVar4);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*piVar4 + 0xc4))();
      if (cVar2 == '\0') {
        (**(code **)(*(int *)visitor + 0xc))(iVar1,context);
      }
      cVar2 = (**(code **)(*piVar4 + 0xbc))();
      if (cVar2 == '\0') {
        ArchetypeDB_getInstance();
        uVar3 = Archetype_getField3c(this_02);
        iVar5 = iVar1 + 300000;
        ArchetypeDB_getInstance();
        iVar5 = ArchetypeDB_getArchetype(iVar5,uVar3);
        if (iVar5 != 0) {
          (**(code **)(*(int *)visitor + 0xc))(iVar1 + 300000,context);
        }
      }
    }
    if (piStack_14 <= piVar6) {
      FUN_00d83c2d();
    }
    piVar6 = piVar6 + 1;
  }
  uStack_4 = 0xffffffff;
  if (piStack_18 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(piStack_18);
  }
  ExceptionList = local_c;
  return;
}

