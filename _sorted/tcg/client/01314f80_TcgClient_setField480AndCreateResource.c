// addr: 0x01314f80
// name: TcgClient_setField480AndCreateResource
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TcgClient_setField480AndCreateResource(void * this, void * name) */

void __thiscall TcgClient_setField480AndCreateResource(void *this,void *name)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates/creates a helper object stored at offset 0x410, calls a setup
                       helper with the provided string, then stores the string at offset 0x480.
                       Exact class/field names are not proven. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01677a2b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x44);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_01406d50(uVar1);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)((int)this + 0x410) = uVar3;
  FUN_01406c90(name,1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x480),
             name,0,0xffffffff);
  ExceptionList = local_c;
  return;
}

