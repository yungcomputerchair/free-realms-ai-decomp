// addr: 0x014f9c20
// name: OrderItem_scalarDeletingDtor
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall OrderItem_scalarDeletingDtor(void *param_1,byte param_2)

{
                    /* Runs OrderItem_dtor and frees the object when the scalar deleting destructor
                       flag is set. */
  OrderItem_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

