// addr: 0x0135fec0
// name: sub_0135fec0_cleanupValueDataMapMember
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint sub_0135fec0_cleanupValueDataMapMember(void * this, uint result_) */

uint __thiscall sub_0135fec0_cleanupValueDataMapMember(void *this,uint result_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Runs cleanup/copy-construction related handling for a ValueData int-int map
                       member at offset 0xcc and returns the supplied result value. Evidence is the
                       sole call to ValueData_IntIntMap_copyConstruct on this+0xcc. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167ead9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ValueData_IntIntMap_copyConstruct((void *)result_,(void *)((int)this + 0xcc));
  ExceptionList = local_c;
  return result_;
}

