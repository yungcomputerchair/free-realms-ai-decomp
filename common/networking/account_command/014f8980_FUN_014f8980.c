// addr: 0x014f8980
// name: FUN_014f8980
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_014f8980(int param_1,int param_2)

{
  int iVar1;
  undefined1 local_8 [8];
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x14),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             (param_2 + 0x14),0,0xffffffff);
  FUN_005f1e5c(param_2 + 0x30);
  iVar1 = param_1 + 0x40;
  if (iVar1 != param_2 + 0x40) {
    FUN_005152ac(local_8,iVar1,**(undefined4 **)(param_1 + 0x44),iVar1,
                 *(undefined4 **)(param_1 + 0x44));
    FUN_012415a0(param_2 + 0x40);
  }
  PropertySet_copyPropertiesFrom(*(int *)(param_2 + 0x4c));
  return;
}

