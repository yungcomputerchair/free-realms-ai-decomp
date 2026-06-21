// addr: 0x013e32a0
// name: GameObject_setNameAndNotify
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameObject_setNameAndNotify(void * this, void * name) */

void __fastcall GameObject_setNameAndNotify(void *this,void *name)

{
  void *unaff_EBX;
  uint unaff_retaddr;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_38 [4];
  undefined1 local_34;
  undefined4 uStack_2c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Assigns a string into a field near offset 0x5c and then invokes a virtual
                       callback at vtable slot 0xbc with a copy of the same string. The exact class
                       is not proven, so the name is behavior based. */
  puStack_8 = &LAB_0168d530;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  pbVar1 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           &stack0x00000004;
  uStack_2c = 0x13e32db;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x5c),
             pbVar1,0,0xffffffff);
  local_34 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_38,
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &stack0x00000004,0,0xffffffff);
  local_4 = local_4 & 0xffffff00;
  (**(code **)(*(int *)this + 0xbc))();
  if (0xf < unaff_retaddr) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  ExceptionList = pbVar1;
  return;
}

