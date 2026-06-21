// addr: 0x013ce870
// name: Deck_ctor
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall Deck_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a Deck by installing PersistentBase/PersistentComponent/Deck
                       vtables, initializing four strings, vectors/flags, and boolean fields.
                       Evidence: explicit Deck::vftable assignment and string initialization. */
  puStack_8 = &LAB_0168a9d7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = PersistentBase::vftable;
  *param_1 = PersistentComponent::vftable;
  *param_1 = Deck::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0x15] = 0xf;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x1c] = 0xf;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  local_4 = 6;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 1),"",0);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 8),"",0);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xf),"",0
            );
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x16),"",
             0);
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((int)param_1 + 0x89) = 0;
  *(undefined1 *)((int)param_1 + 0x8a) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  ExceptionList = local_c;
  return param_1;
}

