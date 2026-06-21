// addr: 0x00fddf90
// name: AppPhysics_GhostObject_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall AppPhysics_GhostObject_scalarDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for AppPhysics::GhostObject; calls
                       AppPhysics_GhostObject_dtor and frees this when requested. */
  AppPhysics_GhostObject_dtor();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

