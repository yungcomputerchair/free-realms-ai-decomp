// addr: 0x013d38e0
// name: CollectionItem_getArchetypeField5c
// subsystem: common/common/property
// source (binary assert): common/common/property/CollectionItem.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int CollectionItem_getArchetypeField5c(void * this) */

int __fastcall CollectionItem_getArchetypeField5c(void *this)

{
  int extraout_EAX;
  void *this_00;
  uint uVar1;
  int *piVar2;
  int iVar3;
  
                    /* Looks up this collection item's Archetype through the global ArchetypeDB and
                       returns the archetype virtual value at offset 0x5c, or 0 if the archetype
                       cannot be found. A caller tests this return value as a boolean/int property
                       while also checking the item's auxiliary list count. */
  ArchetypeDB_getInstance();
  if (extraout_EAX == 0) {
    FUN_012f5a60("archDB","..\\common\\common\\property\\CollectionItem.cpp",0x1e1);
  }
  ArchetypeDB_getInstance();
  uVar1 = Archetype_getField3c(this_00);
  piVar2 = (int *)ArchetypeDB_getArchetype(*(undefined4 *)((int)this + 4),uVar1);
  if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x013d392b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar3 = (**(code **)(*piVar2 + 0x5c))();
    return iVar3;
  }
  return 0;
}

