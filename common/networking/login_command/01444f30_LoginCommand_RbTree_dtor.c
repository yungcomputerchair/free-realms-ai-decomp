// addr: 0x01444f30
// name: LoginCommand_RbTree_dtor
// subsystem: common/networking/login_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_RbTree_dtor(void * this) */

void __fastcall LoginCommand_RbTree_dtor(void *this)

{
  undefined1 local_8 [8];
  
                    /* Destroys an embedded tree container by erasing its full range and freeing its
                       header node. The exact template type is not visible in this briefing, so the
                       name is evidence-grounded but generic. */
  LoginCommand_RbTree_eraseRange
            (this,local_8,this,(void *)**(undefined4 **)((int)this + 4),this,
             *(undefined4 **)((int)this + 4));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 4));
}

