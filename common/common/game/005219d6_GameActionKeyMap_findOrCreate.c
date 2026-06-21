// addr: 0x005219d6
// name: GameActionKeyMap_findOrCreate
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GameActionKeyMap_findOrCreate(void * this, int key, char kind, int arg1,
   int arg2) */

int __thiscall GameActionKeyMap_findOrCreate(void *this,int key,char kind,int arg1,int arg2)

{
  void *this_00;
  bool bVar1;
  undefined4 *extraout_EAX;
  int iVar2;
  int *piVar3;
  int *unaff_EDI;
  int local_24;
  char local_20;
  int local_1c;
  int local_18;
  undefined1 local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
                    /* Looks up a compound action key; if absent it allocates/stores a new id and
                       inserts a record containing key, kind, and two integer arguments. */
  this_00 = (void *)((int)this + 4);
  StdRbTreeInt_find(this_00,&local_1c,&key,unaff_EDI);
  local_c = *extraout_EAX;
  local_8 = extraout_EAX[1];
  CheckedTreeIterator_ctor(*(undefined4 *)((int)this + 8),this_00);
  bVar1 = CheckedTreeIterator_equals(&local_c,local_14);
  if (bVar1) {
    iVar2 = FUN_004ce330();
    piVar3 = IntDefaultMap_getOrInsert(this_00,&key);
    *piVar3 = iVar2;
    local_24 = key;
    local_20 = kind;
    local_1c = arg1;
    local_18 = arg2;
    FUN_0051ffc3(&local_24);
  }
  else {
    iVar2 = CheckedTreeIterator_derefValue_nodeFlag15();
    iVar2 = FUN_004ce343(*(undefined4 *)(iVar2 + 4));
    if (((*(int *)(iVar2 + 8) == arg1) && (*(char *)(iVar2 + 4) == kind)) &&
       (*(int *)(iVar2 + 0xc) == arg2)) {
      iVar2 = CheckedTreeIterator_derefValue_nodeFlag15();
      iVar2 = *(int *)(iVar2 + 4);
    }
    else {
      iVar2 = -1;
    }
  }
  return iVar2;
}

