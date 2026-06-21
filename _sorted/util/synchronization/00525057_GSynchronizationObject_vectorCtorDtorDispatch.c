// addr: 0x00525057
// name: GSynchronizationObject_vectorCtorDtorDispatch
// subsystem: common/util/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GSynchronizationObject_vectorCtorDtorDispatch(int op_, void * object,
   void * copyFrom) */

void * __cdecl GSynchronizationObject_vectorCtorDtorDispatch(int op_,void *object,void *copyFrom)

{
  void *pvVar1;
  
                    /* MSVC vector-constructor/destructor dispatcher for GSynchronizationObject:
                       handles default construction, copy construction, allocation plus
                       construction, destruction, and deleting destructor cases based on an
                       operation code. This is compiler support around the class
                       constructors/destructor rather than business logic. */
  if (op_ == 0) {
    if (object != (void *)0x0) {
      GSynchronizationObject_ctor(object);
    }
  }
  else if (op_ == 1) {
    if (object != (void *)0x0) {
      GSynchronizationObject_copyCtor(object,copyFrom);
    }
  }
  else {
    if (op_ == 2) {
      pvVar1 = Mem_Alloc(0x38);
      if (pvVar1 != (void *)0x0) {
        pvVar1 = GSynchronizationObject_ctor(pvVar1);
        return pvVar1;
      }
    }
    else {
      if (op_ != 3) {
        if (op_ == 4) {
          GSynchronizationObject_dtor(object);
          return object;
        }
        if (op_ != 5) {
          return object;
        }
        if (object == (void *)0x0) {
          return (void *)0x0;
        }
        (*(code *)**(undefined4 **)object)(1);
        return object;
      }
      pvVar1 = Mem_Alloc(0x38);
      if (pvVar1 != (void *)0x0) {
        pvVar1 = GSynchronizationObject_copyCtor(pvVar1,copyFrom);
        return pvVar1;
      }
    }
    object = (void *)0x0;
  }
  return object;
}

