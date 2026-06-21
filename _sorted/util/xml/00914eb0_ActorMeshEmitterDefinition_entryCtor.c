// addr: 0x00914eb0
// name: ActorMeshEmitterDefinition_entryCtor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall
ActorMeshEmitterDefinition_entryCtor(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a mesh emitter definition entry and stores the key/id used by the
                       list hash at offset 0xc8. Evidence: called only by the mesh definition
                       insertion path before list linking. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158cd18;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ActorMeshEmitterDefinition_ctor(*param_3);
  *(undefined4 *)(param_1 + 200) = *param_2;
  ExceptionList = local_c;
  return param_1;
}

