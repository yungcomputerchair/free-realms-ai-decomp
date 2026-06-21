// addr: 0x012aafe0
// name: DeckDB_addDeckIfMissing
// subsystem: common/common/property
// source (binary assert): common/common/property/DeckDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x012ab0a7) */
/* Setting prototype: bool DeckDB_addDeckIfMissing(void * this, void * deck) */

bool __thiscall DeckDB_addDeckIfMissing(void *this,void *deck)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  void *element;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  void *local_38 [2];
  uint uStack_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_2c [4];
  void *pvStack_28;
  undefined4 uStack_18;
  uint uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Copies the deck name, checks whether that name is already present in DeckDB's
                       map, and only inserts/registers the deck when no existing entry is found.
                       Evidence is DeckDB.cpp's null-deck assert, std::string assignment from the
                       deck name, map search, and the call to the insert helper on miss. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166c688;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_38;
  element = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffb8);
  ExceptionList = &local_c;
  local_38[0] = this;
  if (deck == (void *)0x0) {
    FUN_012f5a60(&DAT_018d4520,"..\\common\\common\\property\\DeckDB.cpp",0x12d);
  }
  pbVar4 = Deck_getPropertyList(deck);
  uStack_14 = 0xf;
  uStack_18 = 0;
  pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_2c,pbVar4,0,0xffffffff);
  uStack_4 = 0;
  uVar1 = *(uint *)((int)this + 0x18);
  if (uVar1 < *(uint *)((int)this + 0x14)) {
    FUN_00d83c2d();
  }
  uVar2 = *(uint *)((int)this + 0x14);
  if (*(uint *)((int)this + 0x18) < uVar2) {
    FUN_00d83c2d();
  }
  uStack_30 = uVar2;
  uStack_30 = StdStringRange_find(uVar2,uVar1,abStack_2c);
  uVar1 = *(uint *)((int)this + 0x18);
  if (uVar1 < *(uint *)((int)this + 0x14)) {
    FUN_00d83c2d();
  }
  if (uVar1 == uStack_30) {
    StdVector28_pushBack((void *)((int)this + 0x10),abStack_2c,element);
    bVar3 = DeckDB_setDeck(local_38[0],deck);
    uStack_4 = 0xffffffff;
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28);
    }
  }
  else {
    uStack_4 = 0xffffffff;
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28);
    }
    bVar3 = false;
  }
  ExceptionList = local_c;
  return bVar3;
}

