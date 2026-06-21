// addr: 0x013eea50
// name: GatewayCommand_GetConnectionServer_cloneInto
// subsystem: common/networking/gateway_command
// source (binary assert): common/networking/gateway_command/GatewayCommandGetConnectionServer.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GatewayCommand_GetConnectionServer_cloneInto(void * this, void * target)
    */

void __thiscall GatewayCommand_GetConnectionServer_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Copies a GatewayCommand_GetConnectionServer into an RTTI-checked target,
                       invoking GatewayCommand cloneInto, assigning three string members, and
                       copying scalar fields at the tail. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &GatewayCommand_GetConnectionServer::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone",
                 "..\\common\\networking\\gateway_command\\GatewayCommandGetConnectionServer.cpp",
                 0x74);
  }
  GatewayCommand_cloneInto(target_00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)target_00 + 4)
             ,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
              ((int)this + 4),0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)target_00 + 0x20),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x20),0,0xffffffff);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             ((int)target_00 + 0x3c),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             ((int)this + 0x3c),0,0xffffffff);
  *(undefined4 *)((int)target_00 + 0x58) = *(undefined4 *)((int)this + 0x58);
  *(undefined1 *)((int)target_00 + 0x5c) = *(undefined1 *)((int)this + 0x5c);
  *(undefined4 *)((int)target_00 + 0x60) = *(undefined4 *)((int)this + 0x60);
  return;
}

