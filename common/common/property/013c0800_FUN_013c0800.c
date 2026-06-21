// addr: 0x013c0800
// name: FUN_013c0800
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_013c0800(int *param_1,void *param_2)

{
                    /* Dumps/serializes an unknown command object by invoking its base dump, writing
                       an integer, two string members, and a boolean byte. Evidence is the virtual
                       begin/end calls, base helper FUN_013bcfe0, Serializer_appendInteger, and
                       appendString calls. */
  (**(code **)(*param_1 + 8))(param_2);
  UChatCommand_dump(param_1,param_2);
  Serializer_appendInteger(param_2,param_1[0x11]);
  Serializer_appendString(param_2,param_1 + 0x13);
  Serializer_appendString(param_2,param_1 + 0x1a);
  Serializer_appendInteger(param_2,(uint)*(byte *)(param_1 + 0x12));
  (**(code **)(*param_1 + 0xc))(param_2);
  return;
}

