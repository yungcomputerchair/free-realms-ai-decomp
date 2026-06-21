// addr: 0x013d29b0
// name: FUN_013d29b0
// subsystem: common/networking/userdata_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_013d29b0(int param_1,int param_2)

{
  int iVar1;
  undefined1 local_8 [8];
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x10),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x10),0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x2c),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x2c),0,0xffffffff);
  iVar1 = param_1 + 0x4c;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  if (iVar1 != param_2 + 0x4c) {
    FUN_005152ac(local_8,iVar1,**(undefined4 **)(param_1 + 0x50),iVar1,
                 *(undefined4 **)(param_1 + 0x50));
    FUN_012415a0(param_2 + 0x4c);
  }
  iVar1 = param_1 + 0x58;
  if (iVar1 != param_2 + 0x58) {
    FUN_005152ac(local_8,iVar1,**(undefined4 **)(param_1 + 0x5c),iVar1,
                 *(undefined4 **)(param_1 + 0x5c));
    FUN_012415a0(param_2 + 0x58);
  }
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_2 + 100);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x68),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x68),0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x84),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x84),0,0xffffffff);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0xa4),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0xa4),0,0xffffffff);
  StdVector28_assign(param_2 + 0xf8);
  return;
}

