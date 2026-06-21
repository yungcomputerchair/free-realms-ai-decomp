// addr: 0x014397d0
// name: FUN_014397d0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DeckDB_withDeckByString(void * callback, void * arg, void * deckName) */

void __thiscall DeckDB_withDeckByString(void *this,void *callback,void *arg,void *deckName)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  char *pcVar5;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Looks up a deck by a non-empty string name, invokes a callback/virtual method
                       with the found deck, then releases the deck object. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01697668;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  if (*(int *)((int)arg + 0x14) != 0) {
    if (*(uint *)((int)arg + 0x18) < 0x10) {
      pcVar5 = (char *)((int)arg + 4);
    }
    else {
      pcVar5 = *(char **)((int)arg + 4);
    }
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar3 = pcVar5;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_28,pcVar5,(int)pcVar3 - (int)(pcVar5 + 1));
    local_4 = 0;
    pbVar6 = local_28;
    FUN_012aab80(pbVar6,uVar2);
    puVar4 = (undefined4 *)DeckDB_getDeckByName(pbVar6);
    local_4 = 0xffffffff;
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)(*(int *)this + 4))(callback,puVar4);
      (**(code **)*puVar4)(1);
    }
  }
  ExceptionList = local_c;
  return;
}

