// addr: 0x012aa8a0
// name: DeckDB_getOrCreateDeckSlotByName
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int DeckDB_getOrCreateDeckSlotByName(void * deck_db, void * deck_name) */

int __thiscall DeckDB_getOrCreateDeckSlotByName(void *this,void *deck_db,void *deck_name)

{
  void *key_string;
  void *hint_tree;
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined1 local_34 [8];
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar2 = deck_db;
                    /* Looks up a deck by string key, inserts a new node if the key is absent, and
                       returns the deck storage slot within the tree node. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166c568;
  local_c = ExceptionList;
  key_string = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffc0);
  ExceptionList = &local_c;
  hint_tree = (void *)RBTreeString_lowerBound_deckMap(deck_db);
  if (this == (void *)0x0) {
    FUN_00d83c2d();
  }
  if (hint_tree != *(void **)((int)this + 4)) {
    if (*(uint *)((int)hint_tree + 0x24) < 0x10) {
      iVar1 = (int)hint_tree + 0x10;
    }
    else {
      iVar1 = *(int *)((int)hint_tree + 0x10);
    }
    iVar1 = FUN_00f942a0(0,*(undefined4 *)((int)pvVar2 + 0x14),iVar1,
                         *(undefined4 *)((int)hint_tree + 0x20));
    if (-1 < iVar1) goto LAB_012aa94a;
  }
  deck_db = (void *)0x0;
  pvVar2 = (void *)DeckDB_DeckSlotValue_copyConstruct(pvVar2,&deck_db);
  local_4 = 0;
  puVar3 = DeckDB_StringTree_insertOrFind(this,local_34,this,hint_tree,pvVar2,key_string);
  this = (void *)*puVar3;
  hint_tree = (void *)puVar3[1];
  local_4 = 0xffffffff;
  StdString_dtor_012a8f50(local_2c);
LAB_012aa94a:
  if (this == (void *)0x0) {
    FUN_00d83c2d();
  }
  if (hint_tree == *(void **)((int)this + 4)) {
    FUN_00d83c2d();
  }
  ExceptionList = local_c;
  return (int)hint_tree + 0x28;
}

