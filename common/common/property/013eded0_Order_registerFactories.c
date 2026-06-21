// addr: 0x013eded0
// name: Order_registerFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Order_registerFactories(void) */

void Order_registerFactories(void)

{
                    /* Registers Order and OrderItem component factories. Both callees are factory
                       registration wrappers for constructors that set Order::vftable or
                       OrderItem::vftable. */
  OrderItem_registerFactory();
  Order_registerFactory();
  return;
}

