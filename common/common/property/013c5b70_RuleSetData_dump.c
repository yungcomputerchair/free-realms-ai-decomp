// addr: 0x013c5b70
// name: RuleSetData_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RuleSetData_dump(void * this, void * stream) */

void __thiscall RuleSetData_dump(void *this,void *stream)

{
  int *piVar1;
  bool bVar2;
  
                    /* Dumps a RuleSetData object, including rule set id and optional expression
                       tree, between begin/end object markers. The string literals explicitly name
                       RuleSetData and the fields printed. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting RuleSetData\n");
  DebugStream_writeCString(stream,"RuleSetID:");
  Serializer_appendInteger(stream,*(uint *)((int)this + 4));
  DebugStream_writeCString(stream,"Expression Tree:\n");
  piVar1 = *(int **)((int)this + 8);
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(stream,1);
  }
  else {
    bVar2 = Serializer_appendInteger(stream,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(stream);
    }
  }
  DebugStream_writeCString(stream,"Ending RuleSetData\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

