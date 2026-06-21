// addr: 0x013ec6f0
// name: DeckValidation_buildOwnershipPropertyPath
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void DeckValidation_buildOwnershipPropertyPath(void) */

void DeckValidation_buildOwnershipPropertyPath(void)

{
  void *element;
  void *in_stack_00000004;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_44 [4];
  void *local_40;
  undefined4 local_30;
  uint local_2c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds/pushes two string path components, Deck and Ownership, likely for deck
                       validation ownership checks. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168ebe0;
  local_c = ExceptionList;
  element = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffb0);
  ExceptionList = &local_c;
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_44,"Deck",4);
  local_4 = 0;
  StdVector28_pushBack(in_stack_00000004,local_44,element);
  local_4 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_28,"Ownership",9);
  local_4 = 1;
  StdVector28_pushBack(in_stack_00000004,local_28,element);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return;
}

