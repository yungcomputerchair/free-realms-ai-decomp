// addr: 0x013ec010
// name: DeckValidation_validateArchetypeProperty
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DeckValidation_validateArchetypeProperty(void * deck, int propertyId) */

bool DeckValidation_validateArchetypeProperty(void *deck,int propertyId)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  void *this;
  uint uVar4;
  void *unaff_retaddr;
  void *pvStack_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds an archetype-derived property context and delegates validation through
                       FUN_012dd0f0, returning its boolean result. Evidence is
                       ArchetypeDB_getInstance, Archetype_getField3c, virtual property fetch at
                       +0x54, and caller context from deck validation functions. */
  puStack_8 = &LAB_0168eb18;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  pvStack_20 = (void *)(uint)(uint3)pvStack_20;
  local_18 = 0;
  local_14 = (void *)0x0;
  local_10 = 0;
  local_4 = 0;
  iVar1 = *(int *)deck;
  ArchetypeDB_getInstance();
  uVar4 = Archetype_getField3c(this);
  (**(code **)(iVar1 + 0x54))(local_1c,uVar4,uVar3);
  bVar2 = DeckValidation_validateCardsFromSet
                    (&stack0xffffffdc,unaff_retaddr,0,(int)deck,(void *)propertyId);
  local_4 = CONCAT31(local_4._1_3_,bVar2);
  local_c = (void *)0xffffffff;
  if (pvStack_20 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_20);
  }
  ExceptionList = local_14;
  return bVar2;
}

