// addr: 0x014e6dc0
// name: CommandObject_serializeToString
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_serializeToString(void * command_object) */

void __thiscall CommandObject_serializeToString(void *this,void *command_object)

{
  bool bVar1;
  void *element;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 local_3c [20];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_28 [4];
  void *pvStack_24;
  undefined4 uStack_14;
  uint uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Serializes a command object into a PacketBuffer, copies the raw buffer bytes
                       into a std::string, then frees the packet buffer. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b0170;
  local_c = ExceptionList;
  element = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffb8);
  ExceptionList = &local_c;
  if (command_object != (void *)0x0) {
    PacketBuffer_init(local_3c);
    local_4 = 0;
    bVar1 = Serializer_appendInteger(local_3c,0);
    if (bVar1) {
      (**(code **)(*(int *)command_object + 0x28))(local_3c);
    }
    uVar2 = PacketBuffer_getSize(local_3c);
    puVar3 = PacketBuffer_identity(local_3c);
    uStack_10 = 0xf;
    uStack_14 = 0;
    pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_28,(char *)*puVar3,uVar2);
    local_4._0_1_ = 1;
    StdVector28_pushBack((void *)((int)this + 8),abStack_28,element);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < uStack_10) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_24);
    }
    uStack_10 = 0xf;
    uStack_14 = 0;
    pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
    local_4 = 0xffffffff;
    RawBuffer_free(local_3c);
  }
  ExceptionList = local_c;
  return;
}

