// addr: 0x013ebe50
// name: cwdeckbuilderutilities_sub_013ebe50
// subsystem: common/rules/all
// source (binary assert): common/rules/all/cwdeckbuilderutilities.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: undefined4 cwdeckbuilderutilities_sub_013ebe50(undefined4 param_1_, undefined4
   param_2_, undefined4 param_3_) */

undefined4 cwdeckbuilderutilities_sub_013ebe50(undefined4 param_1_,void *param_2_,int param_3_)

{
  char extraout_AL;
  void *collection;
  int *piVar1;
  undefined4 uVar2;
  void *in_ECX;
  undefined1 auStack_38 [8];
  void *pvStack_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [4];
  void *local_24;
  void *pvStack_20;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Is a class method with behavior inferred from its code shape. Evidence:
                       __FILE__ path ..\\common\\rules\\all\\cwdeckbuilderutilities.cpp; strings You
                       own all of the cards., You do not own the following cards:, aaDeck. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0168eae8;
  local_c = ExceptionList;
  collection = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffb4);
  ExceptionList = &local_c;
  piVar1 = (int *)FUN_00d8d382(param_1_,0,&Deck::RTTI_Type_Descriptor,&CWDeck::RTTI_Type_Descriptor,
                               0);
  if (piVar1 == (int *)0x0) {
    FUN_012f5a60("aaDeck","..\\common\\rules\\all\\cwdeckbuilderutilities.cpp",0x38);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_28,"You do not own the following cards:",0x23);
  uStack_4 = 0;
  PropertyTree21_getOrCreateVectorForId(param_2_,local_28,1);
  uStack_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  uVar2 = (**(code **)(*piVar1 + 0x48))();
  FUN_013341d0(uVar2);
  uStack_4 = 1;
  DeckBuilderUtilities_addMissingCollectionArchetypes
            (in_ECX,auStack_38,param_2_,1,param_3_,collection);
  if (extraout_AL == '\0') {
    PropertyMap_setValueForKey(1,1);
    if (pvStack_30 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_30);
    }
    uVar2 = 0;
  }
  else {
    FUN_012da190(1);
    local_c = (void *)0xf;
    local_10 = 0;
    pvStack_20 = (void *)((uint)pvStack_20 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_24,
               "You own all of the cards.",0x19);
    PropertyTree21_getOrCreateVectorForId(param_2_,&local_24,1);
    if ((void *)0xf < local_c) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_20);
    }
    local_c = (void *)0xf;
    local_10 = 0;
    pvStack_20 = (void *)((uint)pvStack_20 & 0xffffff00);
    if (pvStack_30 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_30);
    }
    uVar2 = 1;
  }
  ExceptionList = puStack_8;
  return uVar2;
}

