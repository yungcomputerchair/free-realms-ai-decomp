// addr: 0x0143a850
// name: Engine_ArchetypeViewBase_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall Engine_ArchetypeViewBase_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Engine::ArchetypeViewBase by constructing Engine_SortableView base
                       and installing the ArchetypeViewBase vtable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01697948;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Engine_SortableView_ctor(param_1);
  *param_1 = Engine::ArchetypeViewBase::vftable;
  ExceptionList = local_c;
  return param_1;
}

