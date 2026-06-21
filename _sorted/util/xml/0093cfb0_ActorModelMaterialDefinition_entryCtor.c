// addr: 0x0093cfb0
// name: ActorModelMaterialDefinition_entryCtor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall
ActorModelMaterialDefinition_entryCtor(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a model-material definition entry and stores its key at offset
                       0x68. Evidence: called by the model material insertion routine before
                       list/hash linking. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01592498;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ActorModelMaterialDefinition_ctor(*param_3);
  *(undefined4 *)(param_1 + 0x68) = *param_2;
  ExceptionList = local_c;
  return param_1;
}

