// addr: 0x013eb7b0
// name: DeckValidation_requireMinimumDrawDeckCards
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: uint DeckValidation_requireMinimumDrawDeckCards(void * deck, void * errors,
   uint minimumCards) */

uint DeckValidation_requireMinimumDrawDeckCards(void *deck,void *errors,uint minimumCards)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint extraout_EAX;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_414 [4];
  void *pvStack_410;
  undefined4 uStack_400;
  uint uStack_3fc;
  char acStack_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Checks the draw deck size through a virtual accessor and records a validation
                       error if it has fewer than the required number of cards. Evidence is the
                       exact sprintf text "You must have at least %d cards in your draw deck." plus
                       callers DeckValidation_validateConstructedDeck/validateSingletonDeck. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0168e99b;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)abStack_414;
  ExceptionList = &local_c;
  iVar2 = (**(code **)(*(int *)deck + 0x48))(DAT_01b839d8 ^ (uint)&stack0xfffffbe4);
  if (*(int *)(iVar2 + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 3;
  }
  if (uVar3 < minimumCards) {
    _sprintf(acStack_3f8,"You must have at least %d cards in your draw deck.",minimumCards);
    pcVar4 = acStack_3f8;
    uStack_3fc = 0xf;
    uStack_400 = 0;
    pvStack_410 = (void *)((uint)pvStack_410 & 0xffffff00);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_414,acStack_3f8,(int)pcVar4 - (int)(acStack_3f8 + 1));
    uStack_4 = 0;
    PropertyTree21_getOrCreateVectorForId(errors,abStack_414,0);
    uStack_4 = 0xffffffff;
    if (0xf < uStack_3fc) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_410);
    }
    uStack_3fc = 0xf;
    uStack_400 = 0;
    pvStack_410 = (void *)((uint)pvStack_410 & 0xffffff00);
    PropertyMap_setValueForKey(1,0);
    uVar3 = extraout_EAX & 0xffffff00;
  }
  else {
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  ExceptionList = local_c;
  return uVar3;
}

