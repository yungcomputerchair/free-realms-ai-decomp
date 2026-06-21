// addr: 0x00915360
// name: ActorProjectileDefinition_entryCtor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall
ActorProjectileDefinition_entryCtor(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a projectile definition entry and stores the list/hash key at
                       offset 0xb8. Evidence: calls ActorProjectileDefinition_ctor then writes *key
                       before insertion. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158cde8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ActorProjectileDefinition_ctor(*param_3);
  *(undefined4 *)(param_1 + 0xb8) = *param_2;
  ExceptionList = local_c;
  return param_1;
}

