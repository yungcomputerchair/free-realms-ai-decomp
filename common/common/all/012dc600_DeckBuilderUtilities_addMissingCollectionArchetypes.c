// addr: 0x012dc600
// name: DeckBuilderUtilities_addMissingCollectionArchetypes
// subsystem: common/common/all
// source (binary assert): common/common/all/DeckBuilderUtilities.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Setting prototype: void DeckBuilderUtilities_addMissingCollectionArchetypes(void * filter, void *
   entryVector, int categoryId_, int tertiaryId_, void * collection) */

void __thiscall
DeckBuilderUtilities_addMissingCollectionArchetypes
          (void *this,void *filter,void *entryVector,int categoryId_,int tertiaryId_,
          void *collection)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  int *piVar6;
  int *extraout_EAX;
  int *piVar7;
  void *self;
  void *this_00;
  uint uVar8;
  int iVar9;
  void *this_01;
  int *key;
  undefined4 uVar10;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [4];
  int *piStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Builds counts for entries accepted by the filter, compares those counts
                       against the supplied collection, and adds missing archetypes to a property
                       index using the given tertiary id. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016712d0;
  local_c = ExceptionList;
  piVar6 = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffc0);
  ExceptionList = &local_c;
  if (tertiaryId_ == 0) {
    FUN_012f5a60("collection","..\\common\\common\\all\\DeckBuilderUtilities.cpp",0x307);
  }
  piVar1 = *(int **)((int)filter + 8);
  if (piVar1 < *(int **)((int)filter + 4)) {
    FUN_00d83c2d();
  }
  FUN_005258fb();
  uStack_4 = 0;
  key = *(int **)((int)filter + 4);
  if (*(int **)((int)filter + 8) < key) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (filter == (void *)0x0) {
      FUN_00d83c2d();
    }
    piVar2 = piStack_14;
    if (key == piVar1) break;
    if (filter == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(int **)((int)filter + 8) <= key) {
      FUN_00d83c2d();
    }
    cVar5 = (*(code *)**(undefined4 **)this)(*key);
    if (cVar5 != '\0') {
      StdRbTreeInt_find(auStack_18,auStack_20,key,piVar6);
      piVar4 = piStack_14;
      piVar2 = (int *)extraout_EAX[1];
      if (((undefined1 *)*extraout_EAX == (undefined1 *)0x0) ||
         ((undefined1 *)*extraout_EAX != auStack_18)) {
        FUN_00d83c2d();
      }
      piVar7 = IntDefaultMap_getOrInsert(auStack_18,key);
      if (piVar2 == piVar4) {
        *piVar7 = 1;
      }
      else {
        *piVar7 = *piVar7 + 1;
      }
    }
    if (*(int **)((int)filter + 8) <= key) {
      FUN_00d83c2d();
    }
    key = key + 2;
  }
  piVar6 = (int *)*piStack_14;
  do {
    if (&stack0x00000000 == &DAT_00000018) {
      FUN_00d83c2d();
    }
    if (piVar6 == piVar2) {
      uStack_4 = 0xffffffff;
      FUN_005152ac(auStack_20,auStack_18,*piStack_14,auStack_18,piStack_14);
                    /* WARNING: Subroutine does not return */
      _free(piStack_14);
    }
    if (&stack0x00000000 == &DAT_00000018) {
      FUN_00d83c2d();
    }
    if (piVar6 == piStack_14) {
      FUN_00d83c2d();
    }
    uVar10 = piVar6[3];
    if (piVar6 == piStack_14) {
      FUN_00d83c2d();
    }
    iVar3 = piVar6[4];
    self = PropertyContainer_findChild((void *)tertiaryId_);
    if (self == (void *)0x0) {
      ArchetypeDB_getInstance();
      uVar8 = Archetype_getField3c(this_00);
      ArchetypeDB_getInstance();
      uVar8 = ArchetypeDB_getArchetype(uVar10,uVar8);
joined_r0x012dc7cc:
      if (uVar8 != 0) {
        PropertyIndex_addTertiaryId(entryVector,uVar8,categoryId_);
      }
    }
    else {
      iVar9 = PropertyVector16_getCount((int)self);
      if (iVar9 < iVar3) {
        ArchetypeDB_getInstance();
        uVar8 = Archetype_getField3c(this_01);
        ArchetypeDB_getInstance();
        uVar8 = ArchetypeDB_getArchetype(uVar10,uVar8);
        goto joined_r0x012dc7cc;
      }
    }
    FUN_004d21f9();
  } while( true );
}

