FROM nginx 
RUN rm -rf /usr/share/nginx/html/*
COPY AlbionOnline.html /usr/share/nginx/html/
EXPOSE 80
CMD ["nginx", "-g", "daemon on;"]