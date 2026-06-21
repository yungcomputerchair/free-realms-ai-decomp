// addr: 0x00911950
// name: FUN_00911950
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00911950(int param_1,void *param_2)

{
                    /* Serializes or deserializes five packet-definition fields; direction/type
                       unclear from context. */
  deserialize_hash_list(param_2,(void *)(param_1 + 0x130));
  FUN_008e5580(param_2,param_1 + 0x50);
  FUN_008e56c0(param_2,param_1 + 0x88);
  FUN_0090a070(param_2,(void *)(param_1 + 0xc0));
  FUN_008e5800(param_2,param_1 + 0xf8);
  return;
}

