// addr: 0x013d3880
// name: CollectionEntry_getNonTradableInstancesVector
// subsystem: common/networking/synch_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall CollectionEntry_getNonTradableInstancesVector(int param_1)

{
                    /* Returns the vector member at offset +0x20, used by SendInstances batch
                       construction for the second/non-tradable instance list. The name is inferred
                       from the SendInstances dump strings and the paired +0x10 accessor used for
                       the tradable list. */
  return param_1 + 0x20;
}

