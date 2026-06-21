// addr: 0x013cead0
// name: TcgMessage_clone
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __fastcall TcgMessage_clone(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x94 bytes, constructs a new object with FUN_013ce870, copies
                       source string fields and several scalar fields, and clones a nested virtual
                       member. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168aa3b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x94);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)Deck_ctor(uVar1);
  }
  local_4 = 0xffffffff;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(piVar3 + 1),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 4),0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(piVar3 + 0xf),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_1 + 0x3c),0,0xffffffff);
  (**(code **)(*piVar3 + 0x60))(param_1 + 0x78);
  piVar3[0x23] = *(int *)(param_1 + 0x8c);
  *(undefined1 *)(piVar3 + 0x22) = *(undefined1 *)(param_1 + 0x88);
  piVar3[0x24] = *(int *)(param_1 + 0x90);
  ExceptionList = pvVar2;
  return piVar3;
}

