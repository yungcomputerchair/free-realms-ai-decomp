// addr: 0x01444ff0
// name: LoginCommand_RbTree_dtor_alt
// subsystem: common/networking/login_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_RbTree_dtor_alt(void * this) */

void __fastcall LoginCommand_RbTree_dtor_alt(void *this)

{
  undefined1 local_8 [8];
  
                    /* Alternate emitted destructor body for the same red-black-tree-style container
                       pattern, erasing all nodes and freeing the header. It lacks RTTI or file
                       evidence, so the suffix distinguishes this duplicate instance. */
  LoginCommand_RbTree_eraseRange
            (this,local_8,this,(void *)**(undefined4 **)((int)this + 4),this,
             *(undefined4 **)((int)this + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 4));
}

