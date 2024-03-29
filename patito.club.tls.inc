
  ssl_certificate "/root/.acme.sh/patito.club/fullchain.cer";
  ssl_certificate_key "/root/.acme.sh/patito.club/patito.club.key";
  ssl_trusted_certificate "/root/isrg-root-ocsp-x1.pem";
  ssl_session_cache shared:SSL:1m;
  ssl_session_timeout  10m;
  ssl_protocols TLSv1 TLSv1.1 TLSv1.2;
  ssl_ciphers EECDH+CHACHA20:EECDH+AES128:RSA+AES128:EECDH+AES256:RSA+AES256:EECDH+3DES:RSA+3DES:!MD5;
  ssl_prefer_server_ciphers on;

